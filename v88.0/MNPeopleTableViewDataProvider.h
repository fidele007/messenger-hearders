/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleTableViewDataProvider <NSObject>
@required
-(long long)absoluteRowIndexForIndexPath:(id)arg1;
-(id)personForIndexPath:(id)arg1;
-(unsigned long long)peopleCount;
-(id)conversationInitiatorIdentifier:(long long)arg1;
-(unsigned long long)topFriendsCount;
-(id)titleForHeaderInSection:(long long)arg1;

@end

