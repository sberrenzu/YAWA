//
//  WeatherCondition.h
//  YAWA
//
//  Created by 黄健 on 16/8/24.
//  Copyright (c) 2016年 Jian Huang. All rights reserved.
//

#ifndef YAWA_WeatherCondition_h
#define YAWA_WeatherCondition_h

@interface WeatherCondition : NSObject

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *humidity;
@property (nonatomic, strong) NSNumber *temperature;
@property (nonatomic, strong) NSNumber *tempHigh;
@property (nonatomic, strong) NSNumber *tempLow;
@property (nonatomic, strong) NSString *locationName;
@property (nonatomic, strong) NSDate *sunrise;
@property (nonatomic, strong) NSDate *sunset;
@property (nonatomic, strong) NSString *conditionDescription;
@property (nonatomic, strong) NSString *condition;
@property (nonatomic, strong) NSNumber *windBearing;
@property (nonatomic, strong) NSNumber *windSpeed;
@property (nonatomic, strong) NSString *icon;

- (NSString *)imageName;

#endif
