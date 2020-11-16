void Y_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_0__3 = new TH1F("Y_0__3","Plane 0",100,-100,100);
   Y_0__3->SetBinContent(30,1);
   Y_0__3->SetBinContent(36,1);
   Y_0__3->SetBinContent(39,1);
   Y_0__3->SetBinContent(40,1);
   Y_0__3->SetBinContent(41,6);
   Y_0__3->SetBinContent(42,10);
   Y_0__3->SetBinContent(43,42);
   Y_0__3->SetBinContent(44,21);
   Y_0__3->SetBinContent(45,21);
   Y_0__3->SetBinContent(46,16);
   Y_0__3->SetBinContent(47,16);
   Y_0__3->SetBinContent(48,18);
   Y_0__3->SetBinContent(49,44);
   Y_0__3->SetBinContent(50,85);
   Y_0__3->SetBinContent(51,49);
   Y_0__3->SetBinContent(52,19);
   Y_0__3->SetBinContent(53,19);
   Y_0__3->SetBinContent(54,19);
   Y_0__3->SetBinContent(55,19);
   Y_0__3->SetBinContent(56,21);
   Y_0__3->SetBinContent(57,22);
   Y_0__3->SetBinContent(58,34);
   Y_0__3->SetBinContent(59,22);
   Y_0__3->SetBinContent(60,1);
   Y_0__3->SetBinContent(61,1);
   Y_0__3->SetBinContent(62,1);
   Y_0__3->SetBinContent(63,1);
   Y_0__3->SetBinContent(64,2);
   Y_0__3->SetBinContent(66,2);
   Y_0__3->SetBinContent(67,1);
   Y_0__3->SetBinContent(68,1);
   Y_0__3->SetBinContent(70,1);
   Y_0__3->SetEntries(518);
   Y_0__3->SetLineWidth(3);
   Y_0__3->GetXaxis()->SetTitle("Y [mm]");
   Y_0__3->GetXaxis()->CenterTitle(true);
   Y_0__3->GetXaxis()->SetLabelFont(42);
   Y_0__3->GetXaxis()->SetTitleSize(0.04);
   Y_0__3->GetXaxis()->SetTitleOffset(1.1);
   Y_0__3->GetXaxis()->SetTitleFont(42);
   Y_0__3->GetYaxis()->SetTitle("Ghost tracks");
   Y_0__3->GetYaxis()->CenterTitle(true);
   Y_0__3->GetYaxis()->SetNdivisions(4000510);
   Y_0__3->GetYaxis()->SetLabelFont(42);
   Y_0__3->GetYaxis()->SetTitleSize(0.04);
   Y_0__3->GetYaxis()->SetTitleOffset(1.1);
   Y_0__3->GetYaxis()->SetTitleFont(42);
   Y_0__3->GetZaxis()->SetLabelFont(42);
   Y_0__3->GetZaxis()->SetTitleOffset(1);
   Y_0__3->GetZaxis()->SetTitleFont(42);
   Y_0__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
