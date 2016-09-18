/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBackstageConsumptionProtocol <NSObject>
@required
-(id)mediaID;
-(CGSize*)mediaSize;
-(unsigned long long)numberOfReactions;
-(unsigned long long)seenByCount;
-(BOOL)canBeReactedTo;
-(BOOL)wasSeenByPerson:(id)arg1;
-(BOOL)canBeSeen;
-(id)seenByPersons;
-(BOOL)hasItemBeenReactedToByPerson:(id)arg1;
-(long long)timezoneOffsetSecondsValue;
-(id)message;
-(id)time;
-(id)owner;
-(id)caption;
-(id)thumbnailURL;
-(BOOL)canBeDeleted;
-(id)thumbnailImage;
-(long long)mediaType;
-(id)locationText;
-(id)media;

@end

