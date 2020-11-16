void Y_45()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_45__93 = new TH1F("Y_45__93","Plane 45",100,-100,100);
   Y_45__93->SetBinContent(32,1);
   Y_45__93->SetBinContent(41,6);
   Y_45__93->SetBinContent(42,6);
   Y_45__93->SetBinContent(43,39);
   Y_45__93->SetBinContent(44,19);
   Y_45__93->SetBinContent(45,18);
   Y_45__93->SetBinContent(46,14);
   Y_45__93->SetBinContent(47,10);
   Y_45__93->SetBinContent(48,12);
   Y_45__93->SetBinContent(49,32);
   Y_45__93->SetBinContent(50,78);
   Y_45__93->SetBinContent(51,49);
   Y_45__93->SetBinContent(52,10);
   Y_45__93->SetBinContent(53,13);
   Y_45__93->SetBinContent(54,12);
   Y_45__93->SetBinContent(55,16);
   Y_45__93->SetBinContent(56,14);
   Y_45__93->SetBinContent(57,20);
   Y_45__93->SetBinContent(58,28);
   Y_45__93->SetBinContent(59,26);
   Y_45__93->SetBinContent(69,1);
   Y_45__93->SetEntries(424);
   Y_45__93->SetLineWidth(3);
   Y_45__93->GetXaxis()->SetTitle("Y [mm]");
   Y_45__93->GetXaxis()->CenterTitle(true);
   Y_45__93->GetXaxis()->SetLabelFont(42);
   Y_45__93->GetXaxis()->SetTitleSize(0.04);
   Y_45__93->GetXaxis()->SetTitleOffset(1.1);
   Y_45__93->GetXaxis()->SetTitleFont(42);
   Y_45__93->GetYaxis()->SetTitle("Ghost tracks");
   Y_45__93->GetYaxis()->CenterTitle(true);
   Y_45__93->GetYaxis()->SetNdivisions(4000510);
   Y_45__93->GetYaxis()->SetLabelFont(42);
   Y_45__93->GetYaxis()->SetTitleSize(0.04);
   Y_45__93->GetYaxis()->SetTitleOffset(1.1);
   Y_45__93->GetYaxis()->SetTitleFont(42);
   Y_45__93->GetZaxis()->SetLabelFont(42);
   Y_45__93->GetZaxis()->SetTitleOffset(1);
   Y_45__93->GetZaxis()->SetTitleFont(42);
   Y_45__93->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
