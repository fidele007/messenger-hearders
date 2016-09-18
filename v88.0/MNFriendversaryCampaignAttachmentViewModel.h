/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNFriendversaryCampaignAttachmentViewModel : FBValueObject <NSCopying> {

	NSString* _campaignID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _placeholderImageURL;

}

@property (nonatomic,copy,readonly) NSString * campaignID;                       //@synthesize campaignID=_campaignID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderImageURL;              //@synthesize placeholderImageURL=_placeholderImageURL - In the implementation block
-(NSString *)campaignID;
-(NSString *)placeholderImageURL;
-(id)initWithCampaignID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 placeholderImageURL:(id)arg4 ;
-(NSString *)title;
-(NSString *)subtitle;
@end

