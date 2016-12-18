/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMLocalThreadKey, FBStringWithRedactedDescription;

@interface MNThreadPreviewingData : FBValueObject <NSCopying> {

	FBMLocalThreadKey* _localThreadKey;
	FBStringWithRedactedDescription* _title;

}

@property (nonatomic,copy,readonly) FBMLocalThreadKey * localThreadKey;                   //@synthesize localThreadKey=_localThreadKey - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * title;              //@synthesize title=_title - In the implementation block
-(FBMLocalThreadKey *)localThreadKey;
-(id)initWithLocalThreadKey:(id)arg1 title:(id)arg2 ;
-(FBStringWithRedactedDescription *)title;
@end

