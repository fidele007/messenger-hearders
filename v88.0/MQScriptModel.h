/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDataModel.h>

@class MSQModelUndoablePrimitive, NSString;

@interface MQScriptModel : MQDataModel {

	MSQModelUndoablePrimitive* _scriptDataProperty;
	MSQModelUndoablePrimitive* _fileNameProperty;

}

@property (nonatomic,copy) NSString * scriptData; 
@property (nonatomic,copy) NSString * fileName; 
-(void)parseAttributes:(id)arg1 ;
-(id)serialize:(id)arg1 ;
-(void)parse:(id)arg1 relations:(id)arg2 fileController:(id)arg3 ;
-(NSString *)scriptData;
-(void)setScriptData:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)addAttributes:(id)arg1 ;
@end

