class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float('inf')
        max_profit = 0
        for price in prices:
            # If current price is less than min_price, update min_price
            if price < min_price:
                min_price = price
            # Else calculate profit and update max_profit if it's greater
            else:
                max_profit = max(max_profit, price - min_price)

        # Return the maximum profit found
        return max_profit