/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNRideServiceAddressListModel : FBValueObject <NSCopying> {

	NSArray* _home;
	NSArray* _recent;
	NSArray* _threads;

}

@property (nonatomic,copy,readonly) NSArray * home;                 //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recent;               //@synthesize recent=_recent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * threads;              //@synthesize threads=_threads - In the implementation block
-(NSArray *)recent;
-(id)initWithHome:(id)arg1 recent:(id)arg2 threads:(id)arg3 ;
-(NSArray *)threads;
-(NSArray *)home;
@end

