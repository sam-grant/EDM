void Y_20()
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
   
   TH1F *Y_20__43 = new TH1F("Y_20__43","Plane 20",100,-100,100);
   Y_20__43->SetBinContent(36,1);
   Y_20__43->SetBinContent(41,8);
   Y_20__43->SetBinContent(42,8);
   Y_20__43->SetBinContent(43,40);
   Y_20__43->SetBinContent(44,19);
   Y_20__43->SetBinContent(45,15);
   Y_20__43->SetBinContent(46,15);
   Y_20__43->SetBinContent(47,13);
   Y_20__43->SetBinContent(48,13);
   Y_20__43->SetBinContent(49,39);
   Y_20__43->SetBinContent(50,79);
   Y_20__43->SetBinContent(51,42);
   Y_20__43->SetBinContent(52,10);
   Y_20__43->SetBinContent(53,12);
   Y_20__43->SetBinContent(54,12);
   Y_20__43->SetBinContent(55,13);
   Y_20__43->SetBinContent(56,15);
   Y_20__43->SetBinContent(57,22);
   Y_20__43->SetBinContent(58,28);
   Y_20__43->SetBinContent(59,23);
   Y_20__43->SetBinContent(66,2);
   Y_20__43->SetBinContent(68,1);
   Y_20__43->SetBinContent(71,1);
   Y_20__43->SetBinContent(74,1);
   Y_20__43->SetBinContent(78,1);
   Y_20__43->SetEntries(433);
   Y_20__43->SetLineWidth(3);
   Y_20__43->GetXaxis()->SetTitle("Y [mm]");
   Y_20__43->GetXaxis()->CenterTitle(true);
   Y_20__43->GetXaxis()->SetLabelFont(42);
   Y_20__43->GetXaxis()->SetTitleSize(0.04);
   Y_20__43->GetXaxis()->SetTitleOffset(1.1);
   Y_20__43->GetXaxis()->SetTitleFont(42);
   Y_20__43->GetYaxis()->SetTitle("Ghost tracks");
   Y_20__43->GetYaxis()->CenterTitle(true);
   Y_20__43->GetYaxis()->SetNdivisions(4000510);
   Y_20__43->GetYaxis()->SetLabelFont(42);
   Y_20__43->GetYaxis()->SetTitleSize(0.04);
   Y_20__43->GetYaxis()->SetTitleOffset(1.1);
   Y_20__43->GetYaxis()->SetTitleFont(42);
   Y_20__43->GetZaxis()->SetLabelFont(42);
   Y_20__43->GetZaxis()->SetTitleOffset(1);
   Y_20__43->GetZaxis()->SetTitleFont(42);
   Y_20__43->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
