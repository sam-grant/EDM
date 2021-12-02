void hBr_Run2_24683_27212()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 25 07:37:14 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-50,50);
   h1__1->SetBinContent(56,1);
   h1__1->SetBinContent(57,34);
   h1__1->SetBinContent(58,70);
   h1__1->SetBinContent(59,150);
   h1__1->SetBinContent(60,56);
   h1__1->SetBinContent(61,59);
   h1__1->SetBinContent(62,56);
   h1__1->SetBinContent(63,74);
   h1__1->SetBinContent(64,79);
   h1__1->SetBinContent(65,8);
   h1__1->SetBinContent(66,3);
   h1__1->SetBinContent(68,1);
   h1__1->SetEntries(591);
   h1__1->GetXaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   h1__1->GetXaxis()->CenterTitle(true);
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetLabelSize(0.035);
   h1__1->GetXaxis()->SetTitleOffset(1.1);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Entries");
   h1__1->GetYaxis()->CenterTitle(true);
   h1__1->GetYaxis()->SetNdivisions(4000510);
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetLabelSize(0.035);
   h1__1->GetYaxis()->SetTitleOffset(1.1);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetLabelSize(0.035);
   h1__1->GetZaxis()->SetTitleSize(0.035);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
