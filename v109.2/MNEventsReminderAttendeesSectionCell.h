/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UICollectionView, UILabel, MNEventsReminderAttendeesDataSource, FBMThreadEventsReminder;

@interface MNEventsReminderAttendeesSectionCell : UITableViewCell {

	UICollectionView* _collectionView;
	UILabel* _rsvpCountLabel;
	MNEventsReminderAttendeesDataSource* _eventsReminderAttendeesDataSource;
	FBMThreadEventsReminder* _eventReminder;

}
-(void)_updateMembersLabel;
-(id)initWithReuseIdentifier:(id)arg1 eventsReminderAttendeesDataSource:(id)arg2 ;
-(void)reloadFacepile;
-(void)layoutSubviews;
@end

