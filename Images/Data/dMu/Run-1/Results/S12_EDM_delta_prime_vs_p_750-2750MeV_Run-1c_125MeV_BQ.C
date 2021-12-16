void S12_EDM_delta_prime_vs_p_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 12:15:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.3598,-1.261993,3144.417,2.488007);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1025[16] = {
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
   Double_t _fy1025[16] = {
   0.1269637,
   0.3325873,
   0.2811375,
   0.6589283,
   0.8737665,
   0.5886517,
   0.546998,
   0.6701223,
   0.7518648,
   0.7510337,
   0.6609642,
   0.3049568,
   1.057408,
   0.0158418,
   1.522576,
   0.8013885};
   Double_t _fex1025[16] = {
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
   Double_t _fey1025[16] = {
   0.3817075,
   0.3097774,
   0.2710762,
   0.2463026,
   0.2335353,
   0.2240832,
   0.2298369,
   0.228614,
   0.2450982,
   0.2588236,
   0.2857215,
   0.3121156,
   0.3546684,
   0.4239375,
   0.5152017,
   0.6514147};
   TGraphErrors *gre = new TGraphErrors(16,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","S12",100,629.7655,2865.011);
   Graph_Graph1025->SetMinimum(-0.8869933);
   Graph_Graph1025->SetMaximum(2.113007);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1025->GetXaxis()->CenterTitle(true);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1025->GetYaxis()->CenterTitle(true);
   Graph_Graph1025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *pol01026 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01026->SetFillColor(19);
   pol01026->SetFillStyle(0);
   pol01026->SetLineColor(2);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(13.74024);
   pol01026->SetNDF(15);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,0.6130067);
   pol01026->SetParError(0,0.07117158);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.61
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
