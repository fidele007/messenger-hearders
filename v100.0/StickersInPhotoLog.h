/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface StickersInPhotoLog : NSObject {

	BOOL _deleted;
	BOOL _shownInComposer;
	unsigned long long _entryCount;
	unsigned long long _numberOfCancels;
	unsigned long long _stickersAdded;
	unsigned long long _stickersRemoved;
	unsigned long long _stickersRemovedFromCancel;
	unsigned long long _totalNumberOfStickers;

}

@property (assign,nonatomic) unsigned long long entryCount;                             //@synthesize entryCount=_entryCount - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                              //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCancels;                        //@synthesize numberOfCancels=_numberOfCancels - In the implementation block
@property (assign,nonatomic) unsigned long long stickersAdded;                          //@synthesize stickersAdded=_stickersAdded - In the implementation block
@property (assign,nonatomic) unsigned long long stickersRemoved;                        //@synthesize stickersRemoved=_stickersRemoved - In the implementation block
@property (assign,nonatomic) unsigned long long stickersRemovedFromCancel;              //@synthesize stickersRemovedFromCancel=_stickersRemovedFromCancel - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumberOfStickers;                  //@synthesize totalNumberOfStickers=_totalNumberOfStickers - In the implementation block
@property (assign,nonatomic) BOOL shownInComposer;                                      //@synthesize shownInComposer=_shownInComposer - In the implementation block
-(void)setEntryCount:(unsigned long long)arg1 ;
-(BOOL)shownInComposer;
-(void)setShownInComposer:(BOOL)arg1 ;
-(unsigned long long)numberOfCancels;
-(void)setNumberOfCancels:(unsigned long long)arg1 ;
-(unsigned long long)stickersAdded;
-(void)setStickersAdded:(unsigned long long)arg1 ;
-(unsigned long long)stickersRemoved;
-(void)setStickersRemoved:(unsigned long long)arg1 ;
-(unsigned long long)stickersRemovedFromCancel;
-(void)setStickersRemovedFromCancel:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfStickers;
-(void)setTotalNumberOfStickers:(unsigned long long)arg1 ;
-(unsigned long long)entryCount;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
@end

