/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:14:49 by arakhurs          #+#    #+#             */
/*   Updated: 2023/08/16 19:48:36 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void mergeInsertSort(std::vector<int> &arr)  {
/*-------------------------------------------------*/
    if (arr.size() <= 1)
        return ;
    std::vector<int> left(arr.begin(), arr.begin() + arr.size() / 2);
    std::vector<int> right(arr.begin() + arr.size() / 2, arr.end());
    
    mergeInsertSort(left);
    mergeInsertSort(right);

    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < left.size())
        arr[k++] = left[i++];
    while (j < right.size())
        arr[k++] = right[j++];
/*------------------------------------------------*/}

void mergeInsertSort(std::deque<int> &arr)   {
/*-------------------------------------------------*/
    if (arr.size() <= 1)
        return ;
    std::deque<int> left(arr.begin(), arr.begin() + arr.size() / 2);
    std::deque<int> right(arr.begin() + arr.size() / 2, arr.end());
    
    mergeInsertSort(left);
    mergeInsertSort(right);

    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < left.size())
        arr[k++] = left[i++];
    while (j < right.size())
        arr[k++] = right[j++];
/*------------------------------------------------*/}
