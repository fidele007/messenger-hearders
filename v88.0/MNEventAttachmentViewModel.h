/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemEvent;

@interface MNEventAttachmentViewModel : FBValueObject <NSCopying> {

	FBMemEvent* _event;

}

@property (nonatomic,copy,readonly) FBMemEvent * event;              //@synthesize event=_event - In the implementation block
-(FBMemEvent *)event;
-(id)initWithEvent:(id)arg1 ;
@end

