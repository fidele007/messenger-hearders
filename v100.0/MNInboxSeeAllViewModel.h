/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxSeeAllContentViewModel, MNInboxSeeAllStyle;

@interface MNInboxSeeAllViewModel : FBValueObject <NSCopying> {

	MNInboxSeeAllContentViewModel* _seeAllContentViewModel;
	MNInboxSeeAllStyle* _seeAllStyle;
	unsigned long long _seeAllBadgeCount;

}

@property (nonatomic,copy,readonly) MNInboxSeeAllContentViewModel * seeAllContentViewModel;              //@synthesize seeAllContentViewModel=_seeAllContentViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNInboxSeeAllStyle * seeAllStyle;                                    //@synthesize seeAllStyle=_seeAllStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long seeAllBadgeCount;                                      //@synthesize seeAllBadgeCount=_seeAllBadgeCount - In the implementation block
-(id)initWithSeeAllContentViewModel:(id)arg1 seeAllStyle:(id)arg2 seeAllBadgeCount:(unsigned long long)arg3 ;
-(MNInboxSeeAllContentViewModel *)seeAllContentViewModel;
-(unsigned long long)seeAllBadgeCount;
-(MNInboxSeeAllStyle *)seeAllStyle;
@end

