void Y_25()
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
   
   TH1F *Y_25__53 = new TH1F("Y_25__53","Plane 25",100,-100,100);
   Y_25__53->SetBinContent(32,1);
   Y_25__53->SetBinContent(41,5);
   Y_25__53->SetBinContent(42,12);
   Y_25__53->SetBinContent(43,32);
   Y_25__53->SetBinContent(44,21);
   Y_25__53->SetBinContent(45,17);
   Y_25__53->SetBinContent(46,14);
   Y_25__53->SetBinContent(47,11);
   Y_25__53->SetBinContent(48,16);
   Y_25__53->SetBinContent(49,36);
   Y_25__53->SetBinContent(50,81);
   Y_25__53->SetBinContent(51,43);
   Y_25__53->SetBinContent(52,16);
   Y_25__53->SetBinContent(53,9);
   Y_25__53->SetBinContent(54,10);
   Y_25__53->SetBinContent(55,12);
   Y_25__53->SetBinContent(56,15);
   Y_25__53->SetBinContent(57,18);
   Y_25__53->SetBinContent(58,30);
   Y_25__53->SetBinContent(59,26);
   Y_25__53->SetBinContent(66,1);
   Y_25__53->SetBinContent(68,1);
   Y_25__53->SetBinContent(71,1);
   Y_25__53->SetBinContent(75,1);
   Y_25__53->SetEntries(429);
   Y_25__53->SetLineWidth(3);
   Y_25__53->GetXaxis()->SetTitle("Y [mm]");
   Y_25__53->GetXaxis()->CenterTitle(true);
   Y_25__53->GetXaxis()->SetLabelFont(42);
   Y_25__53->GetXaxis()->SetTitleSize(0.04);
   Y_25__53->GetXaxis()->SetTitleOffset(1.1);
   Y_25__53->GetXaxis()->SetTitleFont(42);
   Y_25__53->GetYaxis()->SetTitle("Ghost tracks");
   Y_25__53->GetYaxis()->CenterTitle(true);
   Y_25__53->GetYaxis()->SetNdivisions(4000510);
   Y_25__53->GetYaxis()->SetLabelFont(42);
   Y_25__53->GetYaxis()->SetTitleSize(0.04);
   Y_25__53->GetYaxis()->SetTitleOffset(1.1);
   Y_25__53->GetYaxis()->SetTitleFont(42);
   Y_25__53->GetZaxis()->SetLabelFont(42);
   Y_25__53->GetZaxis()->SetTitleOffset(1);
   Y_25__53->GetZaxis()->SetTitleFont(42);
   Y_25__53->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
