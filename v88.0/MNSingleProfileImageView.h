/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class MNConversationContact;

@interface MNSingleProfileImageView : UIImageView {

	MNConversationContact* _contact;

}

@property (nonatomic,copy) MNConversationContact * contact;              //@synthesize contact=_contact - In the implementation block
-(MNConversationContact *)contact;
-(void)setContact:(MNConversationContact *)arg1 ;
@end
