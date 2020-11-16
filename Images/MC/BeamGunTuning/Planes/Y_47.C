void Y_47()
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
   
   TH1F *Y_47__97 = new TH1F("Y_47__97","Plane 47",100,-100,100);
   Y_47__97->SetBinContent(31,1);
   Y_47__97->SetBinContent(39,1);
   Y_47__97->SetBinContent(41,8);
   Y_47__97->SetBinContent(42,9);
   Y_47__97->SetBinContent(43,39);
   Y_47__97->SetBinContent(44,27);
   Y_47__97->SetBinContent(45,19);
   Y_47__97->SetBinContent(46,14);
   Y_47__97->SetBinContent(47,17);
   Y_47__97->SetBinContent(48,22);
   Y_47__97->SetBinContent(49,42);
   Y_47__97->SetBinContent(50,86);
   Y_47__97->SetBinContent(51,51);
   Y_47__97->SetBinContent(52,19);
   Y_47__97->SetBinContent(53,14);
   Y_47__97->SetBinContent(54,23);
   Y_47__97->SetBinContent(55,19);
   Y_47__97->SetBinContent(56,21);
   Y_47__97->SetBinContent(57,27);
   Y_47__97->SetBinContent(58,31);
   Y_47__97->SetBinContent(59,23);
   Y_47__97->SetBinContent(60,2);
   Y_47__97->SetBinContent(61,1);
   Y_47__97->SetBinContent(62,2);
   Y_47__97->SetBinContent(63,2);
   Y_47__97->SetBinContent(64,1);
   Y_47__97->SetBinContent(68,1);
   Y_47__97->SetEntries(522);
   Y_47__97->SetLineWidth(3);
   Y_47__97->GetXaxis()->SetTitle("Y [mm]");
   Y_47__97->GetXaxis()->CenterTitle(true);
   Y_47__97->GetXaxis()->SetLabelFont(42);
   Y_47__97->GetXaxis()->SetTitleSize(0.04);
   Y_47__97->GetXaxis()->SetTitleOffset(1.1);
   Y_47__97->GetXaxis()->SetTitleFont(42);
   Y_47__97->GetYaxis()->SetTitle("Ghost tracks");
   Y_47__97->GetYaxis()->CenterTitle(true);
   Y_47__97->GetYaxis()->SetNdivisions(4000510);
   Y_47__97->GetYaxis()->SetLabelFont(42);
   Y_47__97->GetYaxis()->SetTitleSize(0.04);
   Y_47__97->GetYaxis()->SetTitleOffset(1.1);
   Y_47__97->GetYaxis()->SetTitleFont(42);
   Y_47__97->GetZaxis()->SetLabelFont(42);
   Y_47__97->GetZaxis()->SetTitleOffset(1);
   Y_47__97->GetZaxis()->SetTitleFont(42);
   Y_47__97->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
