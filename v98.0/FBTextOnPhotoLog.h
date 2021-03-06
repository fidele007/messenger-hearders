/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBTextOnPhotoLog : NSObject {

	BOOL _deleted;
	BOOL _shownInComposer;
	unsigned long long _entryCount;
	unsigned long long _numberOfCancels;
	unsigned long long _textOnPhotosAdded;
	unsigned long long _textOnPhotosRemoved;
	unsigned long long _textOnPhotosRemovedFromCancels;
	unsigned long long _totalNumberOfTextOnPhotos;

}

@property (assign,nonatomic) unsigned long long entryCount;                                  //@synthesize entryCount=_entryCount - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                                   //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCancels;                             //@synthesize numberOfCancels=_numberOfCancels - In the implementation block
@property (assign,nonatomic) unsigned long long textOnPhotosAdded;                           //@synthesize textOnPhotosAdded=_textOnPhotosAdded - In the implementation block
@property (assign,nonatomic) unsigned long long textOnPhotosRemoved;                         //@synthesize textOnPhotosRemoved=_textOnPhotosRemoved - In the implementation block
@property (assign,nonatomic) unsigned long long textOnPhotosRemovedFromCancels;              //@synthesize textOnPhotosRemovedFromCancels=_textOnPhotosRemovedFromCancels - In the implementation block
@property (assign,nonatomic) unsigned long long totalNumberOfTextOnPhotos;                   //@synthesize totalNumberOfTextOnPhotos=_totalNumberOfTextOnPhotos - In the implementation block
@property (assign,nonatomic) BOOL shownInComposer;                                           //@synthesize shownInComposer=_shownInComposer - In the implementation block
-(void)setEntryCount:(unsigned long long)arg1 ;
-(BOOL)shownInComposer;
-(void)setShownInComposer:(BOOL)arg1 ;
-(unsigned long long)numberOfCancels;
-(void)setNumberOfCancels:(unsigned long long)arg1 ;
-(unsigned long long)textOnPhotosAdded;
-(void)setTextOnPhotosAdded:(unsigned long long)arg1 ;
-(unsigned long long)textOnPhotosRemoved;
-(void)setTextOnPhotosRemoved:(unsigned long long)arg1 ;
-(unsigned long long)textOnPhotosRemovedFromCancels;
-(void)setTextOnPhotosRemovedFromCancels:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfTextOnPhotos;
-(void)setTotalNumberOfTextOnPhotos:(unsigned long long)arg1 ;
-(unsigned long long)entryCount;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
@end

