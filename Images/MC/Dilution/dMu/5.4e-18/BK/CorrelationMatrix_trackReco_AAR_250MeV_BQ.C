void CorrelationMatrix_trackReco_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  6 12:03:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TH2D *covHist__1 = new TH2D("covHist__1","",3,0,2,3,0,2);
   covHist__1->SetBinContent(6,0.9563);
   covHist__1->SetBinContent(7,-0.9853);
   covHist__1->SetBinContent(8,1);
   covHist__1->SetBinContent(11,-0.9912);
   covHist__1->SetBinContent(12,1);
   covHist__1->SetBinContent(13,-0.9853);
   covHist__1->SetBinContent(16,1);
   covHist__1->SetBinContent(17,-0.9912);
   covHist__1->SetBinContent(18,0.9563);
   covHist__1->SetEntries(9);
   covHist__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   covHist__1->SetLineColor(ci);
   covHist__1->SetMarkerColor(0);
   covHist__1->SetMarkerSize(2);
   covHist__1->GetXaxis()->SetBinLabel(1,"a");
   covHist__1->GetXaxis()->SetBinLabel(2,"b");
   covHist__1->GetXaxis()->SetBinLabel(3,"d_{0}");
   covHist__1->GetXaxis()->CenterTitle(true);
   covHist__1->GetXaxis()->SetLabelFont(42);
   covHist__1->GetXaxis()->SetLabelSize(0.075);
   covHist__1->GetXaxis()->SetTitleSize(0.04);
   covHist__1->GetXaxis()->SetTitleOffset(1.1);
   covHist__1->GetXaxis()->SetTitleFont(42);
   covHist__1->GetYaxis()->SetBinLabel(3,"a");
   covHist__1->GetYaxis()->SetBinLabel(2,"b");
   covHist__1->GetYaxis()->SetBinLabel(1,"d_{0}");
   covHist__1->GetYaxis()->CenterTitle(true);
   covHist__1->GetYaxis()->SetNdivisions(4000510);
   covHist__1->GetYaxis()->SetLabelFont(42);
   covHist__1->GetYaxis()->SetLabelSize(0.075);
   covHist__1->GetYaxis()->SetTitleSize(0.04);
   covHist__1->GetYaxis()->SetTitleOffset(1.1);
   covHist__1->GetYaxis()->SetTitleFont(42);
   covHist__1->GetZaxis()->SetLabelFont(42);
   covHist__1->GetZaxis()->SetTitleOffset(1);
   covHist__1->GetZaxis()->SetTitleFont(42);
   covHist__1->Draw("TEXT COL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
