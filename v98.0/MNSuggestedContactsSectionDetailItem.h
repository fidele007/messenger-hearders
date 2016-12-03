/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNSuggestedContactsSectionDetailItem : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _descriptionText;
	NSString* _imageURI;

}

@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURI;                     //@synthesize imageURI=_imageURI - In the implementation block
-(NSString *)imageURI;
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 imageURI:(id)arg3 ;
-(NSString *)title;
-(NSString *)descriptionText;
@end
