void CorrelationMatrix_trackReco_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 15:28:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   
   TH2D *corHist__1 = new TH2D("corHist__1","",3,0,2,3,0,2);
   corHist__1->SetBinContent(6,0.9505);
   corHist__1->SetBinContent(7,-0.983);
   corHist__1->SetBinContent(8,1);
   corHist__1->SetBinContent(11,-0.99);
   corHist__1->SetBinContent(12,1);
   corHist__1->SetBinContent(13,-0.983);
   corHist__1->SetBinContent(16,1);
   corHist__1->SetBinContent(17,-0.99);
   corHist__1->SetBinContent(18,0.9504);
   corHist__1->SetEntries(9);
   corHist__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   corHist__1->SetLineColor(ci);
   corHist__1->SetMarkerColor(0);
   corHist__1->SetMarkerSize(2);
   corHist__1->GetXaxis()->SetBinLabel(1,"a");
   corHist__1->GetXaxis()->SetBinLabel(2,"b");
   corHist__1->GetXaxis()->SetBinLabel(3,"d_{0}");
   corHist__1->GetXaxis()->CenterTitle(true);
   corHist__1->GetXaxis()->SetLabelFont(42);
   corHist__1->GetXaxis()->SetLabelSize(0.075);
   corHist__1->GetXaxis()->SetTitleSize(0.04);
   corHist__1->GetXaxis()->SetTitleOffset(1.1);
   corHist__1->GetXaxis()->SetTitleFont(42);
   corHist__1->GetYaxis()->SetBinLabel(3,"a");
   corHist__1->GetYaxis()->SetBinLabel(2,"b");
   corHist__1->GetYaxis()->SetBinLabel(1,"d_{0}");
   corHist__1->GetYaxis()->CenterTitle(true);
   corHist__1->GetYaxis()->SetNdivisions(4000510);
   corHist__1->GetYaxis()->SetLabelFont(42);
   corHist__1->GetYaxis()->SetLabelSize(0.075);
   corHist__1->GetYaxis()->SetTitleSize(0.04);
   corHist__1->GetYaxis()->SetTitleOffset(1.1);
   corHist__1->GetYaxis()->SetTitleFont(42);
   corHist__1->GetZaxis()->SetLabelFont(42);
   corHist__1->GetZaxis()->SetTitleOffset(1);
   corHist__1->GetZaxis()->SetTitleFont(42);
   corHist__1->Draw("TEXT COL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
