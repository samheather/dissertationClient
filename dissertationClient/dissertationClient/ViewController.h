//
//  ViewController.h
//  dissertationClient
//
//  Created by Samuel B Heather on 17/01/2015.
//  Copyright (c) 2015 Samuel B Heather. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController {
    IBOutlet NSTextField *numberField;
    IBOutlet NSTextField *questionField;
    IBOutlet NSTextField *responseField;
}

-(IBAction)sendQuery:(id)sender;

@end

