/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFeatureGatingConfig : NSObject {

	BOOL _expectCompleteness;
	NSArray* _gatekeepers;

}

@property (nonatomic,copy,readonly) NSArray * gatekeepers;              //@synthesize gatekeepers=_gatekeepers - In the implementation block
@property (nonatomic,readonly) BOOL expectCompleteness;                 //@synthesize expectCompleteness=_expectCompleteness - In the implementation block
-(id)initWithGatekeepers:(id)arg1 expectCompleteness:(BOOL)arg2 ;
-(NSArray *)gatekeepers;
-(BOOL)expectCompleteness;
@end

