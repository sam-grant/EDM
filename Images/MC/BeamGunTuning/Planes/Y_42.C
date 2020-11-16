void Y_42()
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
   
   TH1F *Y_42__87 = new TH1F("Y_42__87","Plane 42",100,-100,100);
   Y_42__87->SetBinContent(34,1);
   Y_42__87->SetBinContent(41,7);
   Y_42__87->SetBinContent(42,9);
   Y_42__87->SetBinContent(43,35);
   Y_42__87->SetBinContent(44,20);
   Y_42__87->SetBinContent(45,16);
   Y_42__87->SetBinContent(46,14);
   Y_42__87->SetBinContent(47,15);
   Y_42__87->SetBinContent(48,12);
   Y_42__87->SetBinContent(49,32);
   Y_42__87->SetBinContent(50,76);
   Y_42__87->SetBinContent(51,47);
   Y_42__87->SetBinContent(52,13);
   Y_42__87->SetBinContent(53,8);
   Y_42__87->SetBinContent(54,14);
   Y_42__87->SetBinContent(55,14);
   Y_42__87->SetBinContent(56,15);
   Y_42__87->SetBinContent(57,17);
   Y_42__87->SetBinContent(58,28);
   Y_42__87->SetBinContent(59,31);
   Y_42__87->SetBinContent(70,1);
   Y_42__87->SetEntries(425);
   Y_42__87->SetLineWidth(3);
   Y_42__87->GetXaxis()->SetTitle("Y [mm]");
   Y_42__87->GetXaxis()->CenterTitle(true);
   Y_42__87->GetXaxis()->SetLabelFont(42);
   Y_42__87->GetXaxis()->SetTitleSize(0.04);
   Y_42__87->GetXaxis()->SetTitleOffset(1.1);
   Y_42__87->GetXaxis()->SetTitleFont(42);
   Y_42__87->GetYaxis()->SetTitle("Ghost tracks");
   Y_42__87->GetYaxis()->CenterTitle(true);
   Y_42__87->GetYaxis()->SetNdivisions(4000510);
   Y_42__87->GetYaxis()->SetLabelFont(42);
   Y_42__87->GetYaxis()->SetTitleSize(0.04);
   Y_42__87->GetYaxis()->SetTitleOffset(1.1);
   Y_42__87->GetYaxis()->SetTitleFont(42);
   Y_42__87->GetZaxis()->SetLabelFont(42);
   Y_42__87->GetZaxis()->SetTitleOffset(1);
   Y_42__87->GetZaxis()->SetTitleFont(42);
   Y_42__87->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
