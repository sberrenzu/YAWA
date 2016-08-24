//
//  YAWAClient.h
//  YAWA
//
//  Created by 黄健 on 16/8/24.
//  Copyright (c) 2016年 Jian Huang. All rights reserved.
//

#ifndef YAWA_YAWAClient_h
#define YAWA_YAWAClient_h
@import CoreLocation;
@import Foundation;
#import <ReactiveCocoa/Core/ReactiveCocoa.h>



-(RACSignal *)fetchJSONFromURL:(NSURL *)url;

-(RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;

-(RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;

-(RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end

#endif
