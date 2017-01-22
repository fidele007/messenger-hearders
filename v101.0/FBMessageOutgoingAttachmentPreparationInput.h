/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMessageOutgoingAttachment, FBMessageAttachmentContext, FBMessageOutgoingAttribution;

@interface FBMessageOutgoingAttachmentPreparationInput : FBValueObject <NSCopying> {

	FBMessageOutgoingAttachment* _attachment;
	FBMessageAttachmentContext* _attachmentContext;
	FBMessageOutgoingAttribution* _outgoingAttribution;

}

@property (nonatomic,copy,readonly) FBMessageOutgoingAttachment * attachment;                        //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) FBMessageAttachmentContext * attachmentContext;                  //@synthesize attachmentContext=_attachmentContext - In the implementation block
@property (nonatomic,copy,readonly) FBMessageOutgoingAttribution * outgoingAttribution;              //@synthesize outgoingAttribution=_outgoingAttribution - In the implementation block
-(FBMessageOutgoingAttribution *)outgoingAttribution;
-(id)initWithAttachment:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 ;
-(FBMessageOutgoingAttachment *)attachment;
-(FBMessageAttachmentContext *)attachmentContext;
@end
