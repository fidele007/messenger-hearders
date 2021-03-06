/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNProfileImageInfo;

@interface MNProfileImageSpec : FBValueObject <NSCopying, NSCoding> {

	MNProfileImageInfo* _profileImageInfo;
	long long _style;
	long long _badgeType;

}

@property (nonatomic,copy,readonly) MNProfileImageInfo * profileImageInfo;              //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                     //@synthesize badgeType=_badgeType - In the implementation block
-(MNProfileImageInfo *)profileImageInfo;
-(id)initWithProfileImageInfo:(id)arg1 style:(long long)arg2 badgeType:(long long)arg3 ;
-(long long)style;
-(long long)badgeType;
@end

