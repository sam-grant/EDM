void Y_46()
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
   
   TH1F *Y_46__95 = new TH1F("Y_46__95","Plane 46",100,-100,100);
   Y_46__95->SetBinContent(31,1);
   Y_46__95->SetBinContent(41,6);
   Y_46__95->SetBinContent(42,6);
   Y_46__95->SetBinContent(43,37);
   Y_46__95->SetBinContent(44,21);
   Y_46__95->SetBinContent(45,19);
   Y_46__95->SetBinContent(46,11);
   Y_46__95->SetBinContent(47,10);
   Y_46__95->SetBinContent(48,13);
   Y_46__95->SetBinContent(49,33);
   Y_46__95->SetBinContent(50,77);
   Y_46__95->SetBinContent(51,49);
   Y_46__95->SetBinContent(52,11);
   Y_46__95->SetBinContent(53,14);
   Y_46__95->SetBinContent(54,11);
   Y_46__95->SetBinContent(55,16);
   Y_46__95->SetBinContent(56,14);
   Y_46__95->SetBinContent(57,19);
   Y_46__95->SetBinContent(58,32);
   Y_46__95->SetBinContent(59,23);
   Y_46__95->SetBinContent(69,1);
   Y_46__95->SetEntries(424);
   Y_46__95->SetLineWidth(3);
   Y_46__95->GetXaxis()->SetTitle("Y [mm]");
   Y_46__95->GetXaxis()->CenterTitle(true);
   Y_46__95->GetXaxis()->SetLabelFont(42);
   Y_46__95->GetXaxis()->SetTitleSize(0.04);
   Y_46__95->GetXaxis()->SetTitleOffset(1.1);
   Y_46__95->GetXaxis()->SetTitleFont(42);
   Y_46__95->GetYaxis()->SetTitle("Ghost tracks");
   Y_46__95->GetYaxis()->CenterTitle(true);
   Y_46__95->GetYaxis()->SetNdivisions(4000510);
   Y_46__95->GetYaxis()->SetLabelFont(42);
   Y_46__95->GetYaxis()->SetTitleSize(0.04);
   Y_46__95->GetYaxis()->SetTitleOffset(1.1);
   Y_46__95->GetYaxis()->SetTitleFont(42);
   Y_46__95->GetZaxis()->SetLabelFont(42);
   Y_46__95->GetZaxis()->SetTitleOffset(1);
   Y_46__95->GetZaxis()->SetTitleFont(42);
   Y_46__95->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
