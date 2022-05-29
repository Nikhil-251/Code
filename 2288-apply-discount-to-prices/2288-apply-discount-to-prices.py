class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        words = sentence.split(' ');
        ans=[];
        for word in words:
            if(word[0]!='$' or word[1:].isnumeric()==False):
                ans.append(word);
            else:
                price = int(word[1:]);
                price = price * (100 - discount)/100;
                ans.append("${:.2f}".format(price));
                
        return " ".join(ans);
        