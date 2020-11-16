void Y_10()
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
   
   TH1F *Y_10__23 = new TH1F("Y_10__23","Plane 10",100,-100,100);
   Y_10__23->SetBinContent(26,3);
   Y_10__23->SetBinContent(32,1);
   Y_10__23->SetBinContent(34,1);
   Y_10__23->SetBinContent(35,1);
   Y_10__23->SetBinContent(39,1);
   Y_10__23->SetBinContent(41,6);
   Y_10__23->SetBinContent(42,11);
   Y_10__23->SetBinContent(43,43);
   Y_10__23->SetBinContent(44,18);
   Y_10__23->SetBinContent(45,15);
   Y_10__23->SetBinContent(46,16);
   Y_10__23->SetBinContent(47,12);
   Y_10__23->SetBinContent(48,14);
   Y_10__23->SetBinContent(49,41);
   Y_10__23->SetBinContent(50,82);
   Y_10__23->SetBinContent(51,29);
   Y_10__23->SetBinContent(52,20);
   Y_10__23->SetBinContent(53,13);
   Y_10__23->SetBinContent(54,13);
   Y_10__23->SetBinContent(55,21);
   Y_10__23->SetBinContent(56,17);
   Y_10__23->SetBinContent(57,20);
   Y_10__23->SetBinContent(58,33);
   Y_10__23->SetBinContent(59,17);
   Y_10__23->SetBinContent(62,1);
   Y_10__23->SetBinContent(64,1);
   Y_10__23->SetBinContent(65,1);
   Y_10__23->SetBinContent(71,2);
   Y_10__23->SetBinContent(74,1);
   Y_10__23->SetBinContent(75,1);
   Y_10__23->SetBinContent(85,1);
   Y_10__23->SetEntries(456);
   Y_10__23->SetLineWidth(3);
   Y_10__23->GetXaxis()->SetTitle("Y [mm]");
   Y_10__23->GetXaxis()->CenterTitle(true);
   Y_10__23->GetXaxis()->SetLabelFont(42);
   Y_10__23->GetXaxis()->SetTitleSize(0.04);
   Y_10__23->GetXaxis()->SetTitleOffset(1.1);
   Y_10__23->GetXaxis()->SetTitleFont(42);
   Y_10__23->GetYaxis()->SetTitle("Ghost tracks");
   Y_10__23->GetYaxis()->CenterTitle(true);
   Y_10__23->GetYaxis()->SetNdivisions(4000510);
   Y_10__23->GetYaxis()->SetLabelFont(42);
   Y_10__23->GetYaxis()->SetTitleSize(0.04);
   Y_10__23->GetYaxis()->SetTitleOffset(1.1);
   Y_10__23->GetYaxis()->SetTitleFont(42);
   Y_10__23->GetZaxis()->SetLabelFont(42);
   Y_10__23->GetZaxis()->SetTitleOffset(1);
   Y_10__23->GetZaxis()->SetTitleFont(42);
   Y_10__23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
