void Y_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 09:44:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_30__11 = new TH1F("Y_30__11","0ppm_20turns",100,-100,100);
   Y_30__11->SetBinContent(30,1);
   Y_30__11->SetBinContent(31,1);
   Y_30__11->SetBinContent(32,1);
   Y_30__11->SetBinContent(33,1);
   Y_30__11->SetBinContent(36,1);
   Y_30__11->SetBinContent(39,1);
   Y_30__11->SetBinContent(40,2);
   Y_30__11->SetBinContent(41,2);
   Y_30__11->SetBinContent(42,2);
   Y_30__11->SetBinContent(43,1);
   Y_30__11->SetBinContent(44,2);
   Y_30__11->SetBinContent(45,1);
   Y_30__11->SetBinContent(46,4);
   Y_30__11->SetBinContent(47,3);
   Y_30__11->SetBinContent(48,1);
   Y_30__11->SetBinContent(49,1);
   Y_30__11->SetBinContent(50,4);
   Y_30__11->SetBinContent(51,4);
   Y_30__11->SetBinContent(52,3);
   Y_30__11->SetBinContent(53,3);
   Y_30__11->SetBinContent(54,2);
   Y_30__11->SetBinContent(55,3);
   Y_30__11->SetBinContent(56,1);
   Y_30__11->SetBinContent(57,1);
   Y_30__11->SetBinContent(58,1);
   Y_30__11->SetBinContent(59,4);
   Y_30__11->SetBinContent(61,1);
   Y_30__11->SetBinContent(63,1);
   Y_30__11->SetEntries(53);
   Y_30__11->SetLineWidth(3);
   Y_30__11->GetXaxis()->SetTitle("Y [mm]");
   Y_30__11->GetXaxis()->CenterTitle(true);
   Y_30__11->GetXaxis()->SetLabelFont(42);
   Y_30__11->GetXaxis()->SetTitleSize(0.04);
   Y_30__11->GetXaxis()->SetTitleOffset(1.1);
   Y_30__11->GetXaxis()->SetTitleFont(42);
   Y_30__11->GetYaxis()->SetTitle("Ghost tracks");
   Y_30__11->GetYaxis()->CenterTitle(true);
   Y_30__11->GetYaxis()->SetNdivisions(4000510);
   Y_30__11->GetYaxis()->SetLabelFont(42);
   Y_30__11->GetYaxis()->SetTitleSize(0.04);
   Y_30__11->GetYaxis()->SetTitleOffset(1.1);
   Y_30__11->GetYaxis()->SetTitleFont(42);
   Y_30__11->GetZaxis()->SetLabelFont(42);
   Y_30__11->GetZaxis()->SetTitleOffset(1);
   Y_30__11->GetZaxis()->SetTitleFont(42);
   Y_30__11->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
