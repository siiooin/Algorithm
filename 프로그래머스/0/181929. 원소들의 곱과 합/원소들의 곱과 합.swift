import Foundation

func solution(_ num_list:[Int]) -> Int {
    var sum = 0
    var product = 1

    for n in num_list {
        sum += n
        product *= n
    }

    return product < sum * sum ? 1 : 0
}