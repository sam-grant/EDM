void Y_44()
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
   
   TH1F *Y_44__91 = new TH1F("Y_44__91","Plane 44",100,-100,100);
   Y_44__91->SetBinContent(33,1);
   Y_44__91->SetBinContent(41,6);
   Y_44__91->SetBinContent(42,7);
   Y_44__91->SetBinContent(43,38);
   Y_44__91->SetBinContent(44,20);
   Y_44__91->SetBinContent(45,16);
   Y_44__91->SetBinContent(46,14);
   Y_44__91->SetBinContent(47,11);
   Y_44__91->SetBinContent(48,13);
   Y_44__91->SetBinContent(49,30);
   Y_44__91->SetBinContent(50,78);
   Y_44__91->SetBinContent(51,50);
   Y_44__91->SetBinContent(52,11);
   Y_44__91->SetBinContent(53,10);
   Y_44__91->SetBinContent(54,14);
   Y_44__91->SetBinContent(55,16);
   Y_44__91->SetBinContent(56,13);
   Y_44__91->SetBinContent(57,22);
   Y_44__91->SetBinContent(58,25);
   Y_44__91->SetBinContent(59,28);
   Y_44__91->SetBinContent(70,1);
   Y_44__91->SetEntries(424);
   Y_44__91->SetLineWidth(3);
   Y_44__91->GetXaxis()->SetTitle("Y [mm]");
   Y_44__91->GetXaxis()->CenterTitle(true);
   Y_44__91->GetXaxis()->SetLabelFont(42);
   Y_44__91->GetXaxis()->SetTitleSize(0.04);
   Y_44__91->GetXaxis()->SetTitleOffset(1.1);
   Y_44__91->GetXaxis()->SetTitleFont(42);
   Y_44__91->GetYaxis()->SetTitle("Ghost tracks");
   Y_44__91->GetYaxis()->CenterTitle(true);
   Y_44__91->GetYaxis()->SetNdivisions(4000510);
   Y_44__91->GetYaxis()->SetLabelFont(42);
   Y_44__91->GetYaxis()->SetTitleSize(0.04);
   Y_44__91->GetYaxis()->SetTitleOffset(1.1);
   Y_44__91->GetYaxis()->SetTitleFont(42);
   Y_44__91->GetZaxis()->SetLabelFont(42);
   Y_44__91->GetZaxis()->SetTitleOffset(1);
   Y_44__91->GetZaxis()->SetTitleFont(42);
   Y_44__91->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
