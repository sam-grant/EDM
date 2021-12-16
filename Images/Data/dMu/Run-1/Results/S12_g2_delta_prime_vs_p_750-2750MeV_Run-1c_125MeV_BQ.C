void S12_g2_delta_prime_vs_p_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 12:15:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.3598,-1.864984,3144.417,1.885016);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1031[16] = {
   816.036,
   938.5588,
   1062.792,
   1188.402,
   1312.659,
   1436.008,
   1561.944,
   1685.355,
   1810.634,
   1935.163,
   2060.286,
   2185.107,
   2309.111,
   2432.867,
   2559.582,
   2678.741};
   Double_t _fy1031[16] = {
   0.04664695,
   0.4596523,
   0.12214,
   0.2791328,
   0.06810315,
   -0.04329021,
   -0.01551146,
   -0.5695123,
   0.01636967,
   0.09133293,
   -0.1908761,
   -0.4554452,
   0.3026978,
   0.4388169,
   0.4519063,
   0.230676};
   Double_t _fex1031[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[16] = {
   0.3799057,
   0.3088045,
   0.2701793,
   0.2453877,
   0.2322327,
   0.2229045,
   0.2291184,
   0.2284137,
   0.2451869,
   0.2601425,
   0.289413,
   0.3172834,
   0.3636366,
   0.4426377,
   0.5452343,
   0.7064558};
   TGraphErrors *gre = new TGraphErrors(16,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","S12",100,629.7655,2865.011);
   Graph_Graph1031->SetMinimum(-1.489984);
   Graph_Graph1031->SetMaximum(1.510016);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1031->GetXaxis()->CenterTitle(true);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1031->GetYaxis()->CenterTitle(true);
   Graph_Graph1031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol01032 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01032->SetFillColor(19);
   pol01032->SetFillStyle(0);
   pol01032->SetLineColor(2);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(15.14689);
   pol01032->SetNDF(15);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,0.0100158);
   pol01032->SetParError(0,0.07144252);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.01
#pm0.07
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
