void Y_28()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_28__59 = new TH1F("Y_28__59","Plane 28",100,-100,100);
   Y_28__59->SetBinContent(30,1);
   Y_28__59->SetBinContent(41,6);
   Y_28__59->SetBinContent(42,14);
   Y_28__59->SetBinContent(43,30);
   Y_28__59->SetBinContent(44,20);
   Y_28__59->SetBinContent(45,17);
   Y_28__59->SetBinContent(46,15);
   Y_28__59->SetBinContent(47,15);
   Y_28__59->SetBinContent(48,10);
   Y_28__59->SetBinContent(49,37);
   Y_28__59->SetBinContent(50,83);
   Y_28__59->SetBinContent(51,44);
   Y_28__59->SetBinContent(52,9);
   Y_28__59->SetBinContent(53,11);
   Y_28__59->SetBinContent(54,11);
   Y_28__59->SetBinContent(55,11);
   Y_28__59->SetBinContent(56,16);
   Y_28__59->SetBinContent(57,15);
   Y_28__59->SetBinContent(58,30);
   Y_28__59->SetBinContent(59,30);
   Y_28__59->SetBinContent(66,1);
   Y_28__59->SetBinContent(69,1);
   Y_28__59->SetBinContent(73,1);
   Y_28__59->SetBinContent(75,1);
   Y_28__59->SetEntries(429);
   Y_28__59->SetLineWidth(3);
   Y_28__59->GetXaxis()->SetTitle("Y [mm]");
   Y_28__59->GetXaxis()->CenterTitle(true);
   Y_28__59->GetXaxis()->SetLabelFont(42);
   Y_28__59->GetXaxis()->SetTitleSize(0.04);
   Y_28__59->GetXaxis()->SetTitleOffset(1.1);
   Y_28__59->GetXaxis()->SetTitleFont(42);
   Y_28__59->GetYaxis()->SetTitle("Ghost tracks");
   Y_28__59->GetYaxis()->CenterTitle(true);
   Y_28__59->GetYaxis()->SetNdivisions(4000510);
   Y_28__59->GetYaxis()->SetLabelFont(42);
   Y_28__59->GetYaxis()->SetTitleSize(0.04);
   Y_28__59->GetYaxis()->SetTitleOffset(1.1);
   Y_28__59->GetYaxis()->SetTitleFont(42);
   Y_28__59->GetZaxis()->SetLabelFont(42);
   Y_28__59->GetZaxis()->SetTitleOffset(1);
   Y_28__59->GetZaxis()->SetTitleFont(42);
   Y_28__59->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
