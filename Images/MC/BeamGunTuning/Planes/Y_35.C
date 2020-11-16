void Y_35()
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
   
   TH1F *Y_35__73 = new TH1F("Y_35__73","Plane 35",100,-100,100);
   Y_35__73->SetBinContent(40,1);
   Y_35__73->SetBinContent(41,6);
   Y_35__73->SetBinContent(42,10);
   Y_35__73->SetBinContent(43,32);
   Y_35__73->SetBinContent(44,19);
   Y_35__73->SetBinContent(45,18);
   Y_35__73->SetBinContent(46,16);
   Y_35__73->SetBinContent(47,14);
   Y_35__73->SetBinContent(48,16);
   Y_35__73->SetBinContent(49,34);
   Y_35__73->SetBinContent(50,78);
   Y_35__73->SetBinContent(51,42);
   Y_35__73->SetBinContent(52,11);
   Y_35__73->SetBinContent(53,13);
   Y_35__73->SetBinContent(54,12);
   Y_35__73->SetBinContent(55,11);
   Y_35__73->SetBinContent(56,17);
   Y_35__73->SetBinContent(57,18);
   Y_35__73->SetBinContent(58,24);
   Y_35__73->SetBinContent(59,32);
   Y_35__73->SetBinContent(64,1);
   Y_35__73->SetBinContent(70,1);
   Y_35__73->SetBinContent(79,1);
   Y_35__73->SetEntries(427);
   Y_35__73->SetLineWidth(3);
   Y_35__73->GetXaxis()->SetTitle("Y [mm]");
   Y_35__73->GetXaxis()->CenterTitle(true);
   Y_35__73->GetXaxis()->SetLabelFont(42);
   Y_35__73->GetXaxis()->SetTitleSize(0.04);
   Y_35__73->GetXaxis()->SetTitleOffset(1.1);
   Y_35__73->GetXaxis()->SetTitleFont(42);
   Y_35__73->GetYaxis()->SetTitle("Ghost tracks");
   Y_35__73->GetYaxis()->CenterTitle(true);
   Y_35__73->GetYaxis()->SetNdivisions(4000510);
   Y_35__73->GetYaxis()->SetLabelFont(42);
   Y_35__73->GetYaxis()->SetTitleSize(0.04);
   Y_35__73->GetYaxis()->SetTitleOffset(1.1);
   Y_35__73->GetYaxis()->SetTitleFont(42);
   Y_35__73->GetZaxis()->SetLabelFont(42);
   Y_35__73->GetZaxis()->SetTitleOffset(1);
   Y_35__73->GetZaxis()->SetTitleFont(42);
   Y_35__73->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
