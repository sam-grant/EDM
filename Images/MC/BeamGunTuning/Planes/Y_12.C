void Y_12()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_12__27 = new TH1F("Y_12__27","Plane 12",100,-100,100);
   Y_12__27->SetBinContent(24,1);
   Y_12__27->SetBinContent(26,1);
   Y_12__27->SetBinContent(31,1);
   Y_12__27->SetBinContent(32,1);
   Y_12__27->SetBinContent(33,1);
   Y_12__27->SetBinContent(37,1);
   Y_12__27->SetBinContent(41,7);
   Y_12__27->SetBinContent(42,14);
   Y_12__27->SetBinContent(43,36);
   Y_12__27->SetBinContent(44,20);
   Y_12__27->SetBinContent(45,18);
   Y_12__27->SetBinContent(46,14);
   Y_12__27->SetBinContent(47,10);
   Y_12__27->SetBinContent(48,13);
   Y_12__27->SetBinContent(49,46);
   Y_12__27->SetBinContent(50,78);
   Y_12__27->SetBinContent(51,34);
   Y_12__27->SetBinContent(52,13);
   Y_12__27->SetBinContent(53,15);
   Y_12__27->SetBinContent(54,14);
   Y_12__27->SetBinContent(55,15);
   Y_12__27->SetBinContent(56,21);
   Y_12__27->SetBinContent(57,17);
   Y_12__27->SetBinContent(58,32);
   Y_12__27->SetBinContent(59,16);
   Y_12__27->SetBinContent(60,2);
   Y_12__27->SetBinContent(61,2);
   Y_12__27->SetBinContent(66,2);
   Y_12__27->SetBinContent(72,1);
   Y_12__27->SetEntries(446);
   Y_12__27->SetLineWidth(3);
   Y_12__27->GetXaxis()->SetTitle("Y [mm]");
   Y_12__27->GetXaxis()->CenterTitle(true);
   Y_12__27->GetXaxis()->SetLabelFont(42);
   Y_12__27->GetXaxis()->SetTitleSize(0.04);
   Y_12__27->GetXaxis()->SetTitleOffset(1.1);
   Y_12__27->GetXaxis()->SetTitleFont(42);
   Y_12__27->GetYaxis()->SetTitle("Ghost tracks");
   Y_12__27->GetYaxis()->CenterTitle(true);
   Y_12__27->GetYaxis()->SetNdivisions(4000510);
   Y_12__27->GetYaxis()->SetLabelFont(42);
   Y_12__27->GetYaxis()->SetTitleSize(0.04);
   Y_12__27->GetYaxis()->SetTitleOffset(1.1);
   Y_12__27->GetYaxis()->SetTitleFont(42);
   Y_12__27->GetZaxis()->SetLabelFont(42);
   Y_12__27->GetZaxis()->SetTitleOffset(1);
   Y_12__27->GetZaxis()->SetTitleFont(42);
   Y_12__27->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
