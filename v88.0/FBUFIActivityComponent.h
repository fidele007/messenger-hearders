/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@class NSArray, NSString;

@interface FBUFIActivityComponent : CKCompositeComponent {

	NSArray* _trackingCodes;
	NSString* _recentActivityType;

}

@property (nonatomic,copy,readonly) NSArray * trackingCodes;                    //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * recentActivityType;              //@synthesize recentActivityType=_recentActivityType - In the implementation block
+(id)newWithRealTimeActivityInfo:(id)arg1 action:(SEL)arg2 toolbox:(id)arg3 ;
-(NSArray *)trackingCodes;
-(NSString *)recentActivityType;
@end

