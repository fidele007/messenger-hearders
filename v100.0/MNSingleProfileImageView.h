/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

