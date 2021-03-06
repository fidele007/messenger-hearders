/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNAttachmentShareTextViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _body;
	NSString* _attribution;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * attribution;              //@synthesize attribution=_attribution - In the implementation block
-(id)initWithTitle:(id)arg1 body:(id)arg2 attribution:(id)arg3 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)attribution;
@end

