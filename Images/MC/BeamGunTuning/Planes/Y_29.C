void Y_29()
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
   
   TH1F *Y_29__61 = new TH1F("Y_29__61","Plane 29",100,-100,100);
   Y_29__61->SetBinContent(29,1);
   Y_29__61->SetBinContent(41,7);
   Y_29__61->SetBinContent(42,12);
   Y_29__61->SetBinContent(43,30);
   Y_29__61->SetBinContent(44,22);
   Y_29__61->SetBinContent(45,17);
   Y_29__61->SetBinContent(46,15);
   Y_29__61->SetBinContent(47,15);
   Y_29__61->SetBinContent(48,13);
   Y_29__61->SetBinContent(49,32);
   Y_29__61->SetBinContent(50,81);
   Y_29__61->SetBinContent(51,47);
   Y_29__61->SetBinContent(52,9);
   Y_29__61->SetBinContent(53,8);
   Y_29__61->SetBinContent(54,12);
   Y_29__61->SetBinContent(55,16);
   Y_29__61->SetBinContent(56,11);
   Y_29__61->SetBinContent(57,17);
   Y_29__61->SetBinContent(58,28);
   Y_29__61->SetBinContent(59,32);
   Y_29__61->SetBinContent(66,1);
   Y_29__61->SetBinContent(70,1);
   Y_29__61->SetBinContent(75,1);
   Y_29__61->SetBinContent(77,1);
   Y_29__61->SetEntries(429);
   Y_29__61->SetLineWidth(3);
   Y_29__61->GetXaxis()->SetTitle("Y [mm]");
   Y_29__61->GetXaxis()->CenterTitle(true);
   Y_29__61->GetXaxis()->SetLabelFont(42);
   Y_29__61->GetXaxis()->SetTitleSize(0.04);
   Y_29__61->GetXaxis()->SetTitleOffset(1.1);
   Y_29__61->GetXaxis()->SetTitleFont(42);
   Y_29__61->GetYaxis()->SetTitle("Ghost tracks");
   Y_29__61->GetYaxis()->CenterTitle(true);
   Y_29__61->GetYaxis()->SetNdivisions(4000510);
   Y_29__61->GetYaxis()->SetLabelFont(42);
   Y_29__61->GetYaxis()->SetTitleSize(0.04);
   Y_29__61->GetYaxis()->SetTitleOffset(1.1);
   Y_29__61->GetYaxis()->SetTitleFont(42);
   Y_29__61->GetZaxis()->SetLabelFont(42);
   Y_29__61->GetZaxis()->SetTitleOffset(1);
   Y_29__61->GetZaxis()->SetTitleFont(42);
   Y_29__61->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
