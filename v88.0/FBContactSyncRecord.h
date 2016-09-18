/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface FBContactSyncRecord : NSObject {

	NSMutableSet* _allItems;

}
+(id)retrieveRecordWithContentsOfFile:(id)arg1 ;
-(void)enumerateRecordItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithRecordItems:(id)arg1 ;
-(void)addRecordItem:(id)arg1 ;
-(void)removeRecordItem:(id)arg1 ;
-(BOOL)containsRecordItem:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
@end

