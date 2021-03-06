/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadListCellViewModel : FBValueObject <NSCopying> {

	BOOL _allowHide;
	BOOL _allowHideAll;

}

@property (nonatomic,readonly) BOOL allowHide;                 //@synthesize allowHide=_allowHide - In the implementation block
@property (nonatomic,readonly) BOOL allowHideAll;              //@synthesize allowHideAll=_allowHideAll - In the implementation block
-(BOOL)allowHideAll;
-(BOOL)allowHide;
-(id)initWithAllowHide:(BOOL)arg1 allowHideAll:(BOOL)arg2 ;
@end

