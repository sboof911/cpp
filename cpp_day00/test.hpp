/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:06:26 by amaach            #+#    #+#             */
/*   Updated: 2021/12/14 00:03:29 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASSE_H
# define  SAMPLE_CLASSE_H

class Sample {
    
    public:
        int     a1;
        float   b2;
        Sample(int i, float f);
        
        ~Sample( void);

};

#endif