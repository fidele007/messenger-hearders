/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemGroup;

@interface MNGroupsAttachmentViewModel : FBValueObject <NSCopying> {

	FBMemGroup* _group;

}

@property (nonatomic,copy,readonly) FBMemGroup * group;              //@synthesize group=_group - In the implementation block
-(FBMemGroup *)group;
-(id)initWithGroup:(id)arg1 ;
@end

