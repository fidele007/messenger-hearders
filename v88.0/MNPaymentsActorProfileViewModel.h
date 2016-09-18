/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsActorProfileViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowBottomSeperator;
	NSString* _titleText;
	NSString* _displayNameText;
	NSString* _FBID;

}

@property (nonatomic,copy,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameText;              //@synthesize displayNameText=_displayNameText - In the implementation block
@property (nonatomic,copy,readonly) NSString * FBID;                         //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBottomSeperator;               //@synthesize shouldShowBottomSeperator=_shouldShowBottomSeperator - In the implementation block
-(NSString *)displayNameText;
-(id)initWithTitleText:(id)arg1 displayNameText:(id)arg2 FBID:(id)arg3 shouldShowBottomSeperator:(BOOL)arg4 ;
-(NSString *)FBID;
-(BOOL)shouldShowBottomSeperator;
-(NSString *)titleText;
@end
