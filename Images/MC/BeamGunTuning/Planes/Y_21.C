void Y_21()
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
   
   TH1F *Y_21__45 = new TH1F("Y_21__45","Plane 21",100,-100,100);
   Y_21__45->SetBinContent(35,1);
   Y_21__45->SetBinContent(39,1);
   Y_21__45->SetBinContent(41,5);
   Y_21__45->SetBinContent(42,10);
   Y_21__45->SetBinContent(43,38);
   Y_21__45->SetBinContent(44,20);
   Y_21__45->SetBinContent(45,16);
   Y_21__45->SetBinContent(46,12);
   Y_21__45->SetBinContent(47,16);
   Y_21__45->SetBinContent(48,13);
   Y_21__45->SetBinContent(49,39);
   Y_21__45->SetBinContent(50,77);
   Y_21__45->SetBinContent(51,42);
   Y_21__45->SetBinContent(52,12);
   Y_21__45->SetBinContent(53,13);
   Y_21__45->SetBinContent(54,12);
   Y_21__45->SetBinContent(55,10);
   Y_21__45->SetBinContent(56,15);
   Y_21__45->SetBinContent(57,21);
   Y_21__45->SetBinContent(58,31);
   Y_21__45->SetBinContent(59,22);
   Y_21__45->SetBinContent(66,2);
   Y_21__45->SetBinContent(68,1);
   Y_21__45->SetBinContent(74,2);
   Y_21__45->SetEntries(431);
   Y_21__45->SetLineWidth(3);
   Y_21__45->GetXaxis()->SetTitle("Y [mm]");
   Y_21__45->GetXaxis()->CenterTitle(true);
   Y_21__45->GetXaxis()->SetLabelFont(42);
   Y_21__45->GetXaxis()->SetTitleSize(0.04);
   Y_21__45->GetXaxis()->SetTitleOffset(1.1);
   Y_21__45->GetXaxis()->SetTitleFont(42);
   Y_21__45->GetYaxis()->SetTitle("Ghost tracks");
   Y_21__45->GetYaxis()->CenterTitle(true);
   Y_21__45->GetYaxis()->SetNdivisions(4000510);
   Y_21__45->GetYaxis()->SetLabelFont(42);
   Y_21__45->GetYaxis()->SetTitleSize(0.04);
   Y_21__45->GetYaxis()->SetTitleOffset(1.1);
   Y_21__45->GetYaxis()->SetTitleFont(42);
   Y_21__45->GetZaxis()->SetLabelFont(42);
   Y_21__45->GetZaxis()->SetTitleOffset(1);
   Y_21__45->GetZaxis()->SetTitleFont(42);
   Y_21__45->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
