/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBPerformanceMetrics : NSObject
+(unsigned)coreCount;
+(unsigned long long)totalMemoryBytes;
+(unsigned long long)freeDiskBytes;
+(unsigned long long)freeMemoryBytes;
+(unsigned long long)residentMemoryBytes;
+(id)batteryStateWithDeviceBatteryState:(long long)arg1 ;
+(unsigned long long)virtualMemoryBytes;
+(BOOL)absoluteStartTime:(double*)arg1 ;
+(BOOL)getNetworkUsage:(NSRange*)arg1 ;
+(BOOL)lastWakeTime:(double*)arg1 ;
+(id)loadAvgWithPrecision:(double)arg1 ;
+(BOOL)lastBootTime:(double*)arg1 ;
+(unsigned long long)webKitMemoryBytes;
+(FBDeviceBatteryInfo)batteryInfo;
+(NSRange)freeAndTotalDiskBytes;
@end
