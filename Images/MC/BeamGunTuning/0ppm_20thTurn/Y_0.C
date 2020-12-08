void Y_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 23 13:10:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_30__3 = new TH1F("Y_30__3","0ppm_20thTurn",100,-100,100);
   Y_30__3->SetBinContent(30,1);
   Y_30__3->SetBinContent(31,1);
   Y_30__3->SetBinContent(32,1);
   Y_30__3->SetBinContent(33,1);
   Y_30__3->SetBinContent(36,1);
   Y_30__3->SetBinContent(39,1);
   Y_30__3->SetBinContent(40,2);
   Y_30__3->SetBinContent(41,2);
   Y_30__3->SetBinContent(42,2);
   Y_30__3->SetBinContent(43,1);
   Y_30__3->SetBinContent(44,2);
   Y_30__3->SetBinContent(45,1);
   Y_30__3->SetBinContent(46,4);
   Y_30__3->SetBinContent(47,3);
   Y_30__3->SetBinContent(48,1);
   Y_30__3->SetBinContent(49,1);
   Y_30__3->SetBinContent(50,4);
   Y_30__3->SetBinContent(51,4);
   Y_30__3->SetBinContent(52,3);
   Y_30__3->SetBinContent(53,3);
   Y_30__3->SetBinContent(54,2);
   Y_30__3->SetBinContent(55,3);
   Y_30__3->SetBinContent(56,1);
   Y_30__3->SetBinContent(57,1);
   Y_30__3->SetBinContent(58,1);
   Y_30__3->SetBinContent(59,4);
   Y_30__3->SetBinContent(61,1);
   Y_30__3->SetBinContent(63,1);
   Y_30__3->SetEntries(53);
   Y_30__3->SetLineWidth(3);
   Y_30__3->GetXaxis()->SetTitle("Y [mm]");
   Y_30__3->GetXaxis()->CenterTitle(true);
   Y_30__3->GetXaxis()->SetLabelFont(42);
   Y_30__3->GetXaxis()->SetTitleSize(0.04);
   Y_30__3->GetXaxis()->SetTitleOffset(1.1);
   Y_30__3->GetXaxis()->SetTitleFont(42);
   Y_30__3->GetYaxis()->SetTitle("Ghost tracks");
   Y_30__3->GetYaxis()->CenterTitle(true);
   Y_30__3->GetYaxis()->SetNdivisions(4000510);
   Y_30__3->GetYaxis()->SetLabelFont(42);
   Y_30__3->GetYaxis()->SetTitleSize(0.04);
   Y_30__3->GetYaxis()->SetTitleOffset(1.1);
   Y_30__3->GetYaxis()->SetTitleFont(42);
   Y_30__3->GetZaxis()->SetLabelFont(42);
   Y_30__3->GetZaxis()->SetTitleOffset(1);
   Y_30__3->GetZaxis()->SetTitleFont(42);
   Y_30__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
